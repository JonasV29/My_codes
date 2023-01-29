package br.com.dio.Objetcs;

public class Livro {

    String autor, numpagina;
    String titulo;

    public String getAutor() {
        return autor;
    }

    public void setAutor(String autor) {
        this.autor = autor;
    }

    public String getNumpagina() {
        return numpagina;
    }

    public void setNumpagina(String numpagina) {
        this.numpagina = numpagina;
    }

    public String getTitulo() {
        return titulo;
    }

    public void setTitulo(String titulo) {
        this.titulo = titulo;
    }

    public Livro() { }


    public Livro(String autor, String numpagina, String titulo) {
        this.autor = autor;
        this.numpagina = numpagina;
        this.titulo = titulo;
    }

    @Override
    public String toString() {
        return "Livro{" +
                "autor='" + autor + '\'' +
                ", numpagina='" + numpagina + '\'' +
                ", titulo='" + titulo + '\'' +
                '}';
    }
}
